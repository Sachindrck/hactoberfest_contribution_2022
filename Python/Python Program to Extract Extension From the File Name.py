import os #OS module provides functionality for interacting with the operating system.
FILE_PATH = 'D:\Projects\client\src\components\example_path.jsx' #file path/name goes here
path_tuple = os.path.splitext(FILE_PATH) #creates a tuple with root and extension
extension = path_tuple[1] #path_tuple[0] = file_name & path_tuple[0] = file_extension
print ("File is of Extension: ", extension) 
