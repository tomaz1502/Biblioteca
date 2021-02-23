// Algoritmo de Euclides estendido
//
// acha x e y tal que ax + by = mdc(a, b) (nao eh unico)
//
// O(log(min(a, b)))

tuple<ll, ll, ll> ext_gcd(ll a, ll b) {
    if (!a) return {b, 0, 1};
    auto [g, x, y] = ext_gcd(b%a, a);
    return {g, y - b/a*x, x};
}