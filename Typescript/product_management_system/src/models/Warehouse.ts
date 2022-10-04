import { Product } from '../interface/Product';
import { v4 as uuid } from 'uuid';
import {warehouseAttributes} from '../interface/IWarehouse';

export default class Warehouse {
    private id: string;
    private name: string;
    private location: string;
    private products: Product[] = [];

    constructor(name: string, location: string) {
        this.id = uuid();
        this.name = name;
        this.location = location;
    }

    public getId(): string {
        return this.id;
    }

    public getName(): string {
        return this.name;
    }

    public getLocation(): string {
        return this.location;
    }

    public getProducts(): Product[] {
        return this.products;
    }

    public setProduct(product: Product): void {
        this.products.push(product);
    }
}