import Company from '../../models/Company';
import Warehouse from '../../models/Warehouse';

export interface ICompanyService {
    addWarehouseToCompany(company: Company, warehouse: Warehouse): void;
}   