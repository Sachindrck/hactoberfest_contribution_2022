const idAutoIncrement = require('id-auto-increment');

class Products {
	constructor() {
		this.id = 1;
		this.products = [];
	}
	autoincrementId() {
		return this.id++;
	}

	getAllProducts() {
		return this.products;
	}

	getProductbyID(id) {
		const productId = this.products.find((product) => product.id === id);
		return productId;
	}

	saveProduct(id, title, price, thumbnail) {
		id = this.autoincrementId();
		const createProduct = this.products.push({ id, title, price, thumbnail });
		return createProduct;
	}

	updateProduct(id, title, price, thumbnail) {
		const productId = this.products.find((product) => product.id === id);
		if (productId) {
			let updateProduct = {
				id: productId.id,
				title: title,
				price: price,
				thumbnail: thumbnail,
			};
			let productIndex = this.products.indexOf(productId);
			this.products.splice(productIndex, 1, updateProduct);
		}
		return productId;
	}

	deleteProductByID(id) {
		const productId = this.products.find((product) => product.id === id);
		if (productId) {
			let productIndex = this.products.indexOf(productId);
			this.products.splice(productIndex, 1);
		}
		return productId;
	}
}

module.exports = Products;
