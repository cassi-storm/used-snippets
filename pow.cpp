const int mod_ = 1e9 + 7;

int pw(int a, int x = mod_ - 2) {
	int res = 1;
	for (; x; x >>= 1, a = 1ll * a * a % mod_) {
        if (x & 1) {
            res = 1ll * res * a % mod_;
        }
    }
	return res;
}
