import { Product } from '../interface/Product';

export interface warehouseAttributes {
    id: string;
    name: string;
    location: string;
    products: Product[];
}