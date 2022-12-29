for (let i = 0; i <= 20; i += 2) {
	for (let j = 1; j <= 3; j++) {
		let st = i * 0.1;
		let nd = j + i * 0.1;
		st % 1 !== 0 ? (st = st.toFixed(1)) : (st = st);
		nd % 1 !== 0 ? (nd = nd.toFixed(1)) : (nd = nd);
		console.log(`I=${st} J=${nd}`);
	}
}
