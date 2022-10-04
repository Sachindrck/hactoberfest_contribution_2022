import Warehouse from './Warehouse';

export default class Company {
    private name: string;
    private warehouses: Warehouse[] = [];

    constructor(name: string) {
        this.name = name;
    }

    public getName(): string {
        return this.name;
    }

    public getWarehousesInfo(): Warehouse[] {
        return this.warehouses;
    }

    public getAllWarehouses(): Warehouse[] {
        return this.warehouses;
    }

    public setWarehouse(warehouse: Warehouse) {
        this.warehouses.push(warehouse);
    }
}