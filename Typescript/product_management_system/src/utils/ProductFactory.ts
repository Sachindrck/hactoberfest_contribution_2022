import { Product } from "../interface/Product";
import { v4 as uuid } from 'uuid';

const product1: Product = {
    id: uuid(),
    name: 'Adidas',
    quantity: 12,
    price: 261,
    size: 'XL'
}

const product2: Product = {
    id: uuid(),
    name: 'Nike',
    quantity: 6,
    price: 232,
    color: 'Purpura'
}

const product3: Product = {
    id: uuid(),
    name: 'Reebok',
    quantity: 14,
    price: 712,
}

export const PRODUCT = {
    product1,
    product2,
    product3
}