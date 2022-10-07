import sys
import configutation as cfg
import pygame
import random
from numpy.core.defchararray import center
from pickle import TRUE

f = open("resources\highscore.txt", "r+")

class SkierClass(pygame.sprite.Sprite):
    def __init__(self):
        pygame.sprite.Sprite.__init__(self)

        self.direction = 0
        self.imagepaths = cfg.SKIER_IMAGE_PATHS[:-1]
        self.image = pygame.image.load(self.imagepaths[self.direction])
        self.rect = self.image.get_rect()
        self.rect.center = [320, 100]
        self.speed = [self.direction, 6-abs(self.direction)*2]

    def turn(self, num):
        self.direction += num
        self.direction = max(-2, self.direction)
        self.direction = min(2, self.direction)
        center = self.rect.center
        self.image = pygame.image.load(self.imagepaths[self.direction])
        self.rect = self.image.get_rect()
        self.rect.center = center
        self.speed = [self.direction, 6-abs(self.direction)*2]
        return self.speed

    def move(self):
        self.rect.centerx += self.speed[0]
        # Allows our Skier to stay into iur screen
        self.rect.centerx = max(20, self.rect.centerx)
        # Allows our Skier not to move outside the screen
        self.rect.centerx = min(620, self.rect.centerx)

    def setFall(self):
        self.image = pygame.image.load(cfg.SKIER_IMAGE_PATHS[-1])

    def setForward(self):
        self.direction = 0  # Starting Point
        # Set the forward spped as per direction
        self.image = pygame.image.load(self.imagepaths[self.direction])


class ObstacleClass(pygame.sprite.Sprite):
    def __init__(self, img_path, location, attribute):
        pygame.sprite.Sprite.__init__(self)
        self.img_path = img_path
        self.image = pygame.image.load(self.img_path)
        self.location = location
        self.rect = self.image.get_rect()
        self.rect.center = self.location  # Center of our rectangle will be our location
        self.attribute = attribute
        self.passed = False

    def move(self, num):
        self.rect.centery = self.location[1] - num


def createObstacles(s, e, num=10):
    obstacles = pygame.sprite.Group()
    locations = []
    for i in range(num):  # here num is number of obstacles displayed in the Game. We can add more obstacel or less by changing the number
        row = random.randint(s, e)
        col = random.randint(0, 9)
        location = [col*64+20, row*64+20]
        if location not in locations:
            locations.append(location)
            attribute = random.choice(list(cfg.OBSTACLE_PATHS.keys()))
            img_path = cfg.OBSTACLE_PATHS[attribute]
            obstacle = ObstacleClass(img_path, location, attribute)
            obstacles.add(obstacle)
    return obstacles


def AddObstacles(obstacles0, obstacles1):
    obstacles = pygame.sprite.Group()
    for obstacle in obstacles0:
        obstacles.add(obstacle)
    for obstacle in obstacles1:
        obstacles.add(obstacle)
    return obstacles


def ShowStartInterface(screen, screensize):
    screen.fill((255, 255, 255))  # Color code of screen
    tfont = pygame.font.Font(cfg.FONTPATH, screensize[0]//5)
    cfont = pygame.font.Font(cfg.FONTPATH, screensize[0]//20)
    title = tfont.render(u'Skier Game', True, (255, 0, 0))
    content = cfont.render(u'Press any key to START.',
                           True, (0, 0, 255))  # DISPLAY MESSAGE
    trect = title.get_rect()
    trect.midtop = (screensize[0]/2, screensize[1]/5)
    crect = content.get_rect()
    crect.midtop = (screensize[0]/2, screensize[1]/2)
    screen.blit(title, trect)
    screen.blit(content, crect)
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                return
        pygame.display.update()
def Exit(screen, screensize, score):
    screen.fill((255, 255, 255))  # Color code of screen
    m = f.read()
    if score > int(m):
        f.seek(0)
        f.write(f"%s"%score)
    f.seek(0)
    m = f.read()
    m = int(m)
    tfont = pygame.font.Font(cfg.FONTPATH, screensize[0]//20)
    cfont = pygame.font.Font(cfg.FONTPATH, screensize[0]//20)
    
    title2 = tfont.render(u'High Score %d' % m, True, (0,0,139))
    title = tfont.render(u'Score %s' % score, True, (255, 0, 0))
    
    content = cfont.render(u'Game Over!', True, (0, 0, 255))  # DISPLAY MESSAGE
    
    trect = title.get_rect()
    trect.midtop = (screensize[0]/2, screensize[1]/5)
    trect2 = title2.get_rect()
    trect2.midtop = (screensize[0]/2, screensize[1]/10)
    
    crect = content.get_rect()
    crect.midtop = (screensize[0]/2, screensize[1]/2)
    
    screen.blit(title, trect)
    screen.blit(title2, trect2)
    screen.blit(content, crect)
    pygame.display.update()

def showScore(screen, score, pos=(10, 10)):
    font = pygame.font.Font(cfg.FONTPATH, 30)
    score_text = font.render("Score: %s" % score, True, (0, 0, 0))
    screen.blit(score_text, pos)


def updateFrame(screen, obstacles, skier, score):
    screen.fill((255, 255, 255))
    obstacles.draw(screen)
    screen.blit(skier.image, skier.rect)
    showScore(screen, score)
    pygame.display.update()


def main():
    pygame.init()
    pygame.mixer.init()
    pygame.mixer.music.load(cfg.BGMPATH)
    pygame.mixer.music.set_volume(0.4)
    pygame.mixer.music.play(-1)

    screen = pygame.display.set_mode(cfg.SCREENSIZE)
    pygame.display.set_caption('SKIER GAME')

    ShowStartInterface(screen, cfg.SCREENSIZE)

    skier = SkierClass()

    obstacles0 = createObstacles(20, 29)
    obstacles1 = createObstacles(10, 19)
    obstaclesflag = 0
    obstacles = AddObstacles(obstacles0, obstacles1)

    clock = pygame.time.Clock()

    distance = 0

    score = 0
    speed = [0, 6]
    count = 1
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                f.close()
                pygame.quit()
                sys.exit()
                
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT or event.key == pygame.K_a:
                    speed = skier.turn(-1)
                elif event.key == pygame.K_RIGHT or event.key == pygame.K_d:
                    speed = skier.turn(1)
        skier.move()
        distance += speed[1]
        if distance >= 640 and obstaclesflag == 0:
            obstaclesflag = 1
            obstacles0 = createObstacles(20, 29)
            obstacles = AddObstacles(obstacles0, obstacles1)

        if distance >= 1280 and obstaclesflag == 1:
            obstaclesflag = 0
            distance -= 1280
            for obstacle in obstacles0:
                obstacle.location[1] = obstacle.location[1] - 1280
            obstacles1 = createObstacles(10, 19)
            obstacles = AddObstacles(obstacles0, obstacles1)

        for obstacle in obstacles:
            obstacle.move(distance)

        hitted_obstacles = pygame.sprite.spritecollide(skier, obstacles, False)
        if hitted_obstacles:
            
            if hitted_obstacles[0].attribute == "tree" and not hitted_obstacles[0].passed:
                score -= 10
                skier.setFall()
                updateFrame(screen, obstacles, skier, score)
                count += 1
                if count > 3:
                    Exit(screen, cfg.SCREENSIZE, score)
                    pygame.time.delay(5000)
                    f.close()
                    pygame.quit()
                    sys.exit()
                pygame.time.delay(1000)
                skier.setForward()
                speed = [0, 6]
                hitted_obstacles[0].passed = True
            elif hitted_obstacles[0].attribute == "flag" and not hitted_obstacles[0].passed:
                score += 10
                obstacles.remove(hitted_obstacles[0])
                

        # Update frames after a certain FPS by using clock
        try:
            updateFrame(screen, obstacles, skier, score)
            clock.tick(cfg.FPS)
        except Exception as e:
            print(e)
        

if __name__ == '__main__':
    main()
    
