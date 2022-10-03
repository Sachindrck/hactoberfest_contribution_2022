import { Product } from '../interface/Product';
import { IWarehouseService } from './gateway/IWarehouseService';
import Warehouse from '../models/Warehouse';

export default class WarehouseService implements IWarehouseService {

    addProductToWarehouse(warehouse: Warehouse, product: Product): void {
        const newProduct = {
            id: product.id,
            name: product.name,
            quantity: product.quantity,
            price: product.price,
            color: product.color ?? 'Not available',
            size: product.size ?? 'Not available'
        }
        warehouse.setProduct(newProduct);
    }

    updateProductFromWarehouse(warehouse: Warehouse, id: string, product: Product): void {
        const products = warehouse.getProducts();
        const productId = products.find(prod => prod.id === id);
        if (productId) {
            throw new Error("Product already exists");
        } else {
            const updatedProduct: Product = {
                id: product.id,
                name: product.name,
                quantity: product.quantity,
                price: product.price,
                color: product.color ?? 'Not available',
                size: product.size ?? 'Not available'
            };
            const productIndex = products.indexOf(productId);
            const productSplice = products.splice(productIndex, 1, updatedProduct);
            [...products, productSplice];
            console.log('Product updated succesfully!');
        }
    }
}
