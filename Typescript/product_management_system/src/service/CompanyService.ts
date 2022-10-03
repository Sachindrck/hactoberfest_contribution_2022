import Warehouse from '../models/Warehouse';
import { ICompanyService } from './gateway/ICompanyService';
import Company from '../models/Company';

export default class CompanyService implements ICompanyService {

    addWarehouseToCompany(company: Company, warehouse: Warehouse): void {
        const companyExists = company.getAllWarehouses()
            .find(w => w.getName().toLowerCase() === warehouse.getName().toLowerCase()
                || w.getId() === warehouse.getId());
        if (companyExists) {
            throw new Error(`Warehouse already exists with this name: ${warehouse.getName()}!!`);
        }
        company.setWarehouse(warehouse);
    }
}

