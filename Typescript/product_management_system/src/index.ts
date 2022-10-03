import Company from "./models/Company";
import Warehouse from "./models/Warehouse";
import CompanyService from "./service/CompanyService";
import WarehouseService from "./service/WarehouseService";
import { PRODUCT } from './utils/ProductFactory';
import util from 'util';
import { Product } from './interface/Product';

function print(object: Product[] | Warehouse[]){
  console.log(util.inspect(object, false, 12, true));
}

const company = new Company('MultyBranding');
const warehouse = new Warehouse('ShirtsWarehouse', 'New York');
const warehouse2 = new Warehouse('PantsWarehouse', 'Paris');

const companyService = new CompanyService();
const warehouseService = new WarehouseService();


companyService.addWarehouseToCompany(company, warehouse);
companyService.addWarehouseToCompany(company, warehouse2);
warehouseService.addProductToWarehouse(warehouse, PRODUCT.product1);
warehouseService.addProductToWarehouse(warehouse, PRODUCT.product2);
warehouseService.addProductToWarehouse(warehouse2, PRODUCT.product3);
//warehouseService.updateProductFromWarehouse(warehouse, '4dd99f6a-a4b2-4199-9ec2-6da0c8ca8a63', PRODUCT.product1)
print(company.getWarehousesInfo());
print(warehouse.getProducts());
print(warehouse2.getProducts());

