const { Router } = require('express');
const router = Router();
const Products = require('../models/product');

const product = new Products();

router.get('/', (req, res) => {
	res.json(product.getAllProducts());
});

router.get('/:id', (req, res) => {
	const id = Number(req.params.id);
	if (isNaN(id)) {
		res.status(404).json({ error: 'The param is not a number' });
		return;
	}
	if (!product.getProductbyID(id)) {
		res.status(404).json({ error: 'The product does not exist' });
		return;
	}
	res.status(200).json(product.getProductbyID(id));
});

router.post('/', (req, res) => {
	const { id, title, price, thumbnail } = req.body;
	product.saveProduct(id, title, price, thumbnail);
	res.sendStatus(201);
});

router.put('/:id', (req, res) => {
	const id = Number(req.params.id);
	const { title, price, thumbnail } = req.body;
	if (product.getProductbyID(id)) {
		res.json(product.getProductbyID(id));
		product.updateProduct(id, title, price, thumbnail);
		res.sendStatus(200);
	} else {
		res.sendStatus(404);
	}
});

router.delete('/:id', (req, res) => {
	const productId = Number(req.params.id);
	const deleteProductByID = product.deleteProductByID(productId);
	res.sendStatus(200).json(deleteProductByID);
});

module.exports = router;
