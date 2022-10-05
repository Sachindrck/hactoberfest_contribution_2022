const express = require('express');
const routes = require('./routes/product.routes')
const app = express();
const PORT = process.env.PORT || 0;

app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use('/', express.static(__dirname + '/html'));
app.use('/api/products', routes);

app.listen(PORT, function () {
	console.log(`Open server on http://localhost:${this.address().port}`);
});
