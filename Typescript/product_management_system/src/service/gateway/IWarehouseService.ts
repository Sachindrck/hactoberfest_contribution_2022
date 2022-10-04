import { Product } from '../../interface/Product';
import Warehouse from '../../models/Warehouse';

export interface IWarehouseService {
    addProductToWarehouse(warehouse: Warehouse, product: Product): void;
    updateProductFromWarehouse(warehouse: Warehouse, id: string, product: Product): void;
}