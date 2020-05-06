/*
    Copyright (C) 2020 Fredrik Johansson

    This file is part of Calcium.

    Calcium is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "ca_qqbar.h"

int main()
{
    slong iter;
    flint_rand_t state;

    flint_printf("cos_pi....");
    fflush(stdout);

    flint_randinit(state);

    for (iter = 0; iter < 1000; iter++)
    {
        ca_qqbar_t x;
        arb_t z, w;
        fmpq_t t;
        slong p;
        ulong q;
        slong prec;

        ca_qqbar_init(x);
        arb_init(z);
        arb_init(w);
        fmpq_init(t);

        q = 1 + n_randint(state, 30);
        p = n_randint(state, 1000);
        p -= 500;
        prec = 2 + n_randint(state, 1000);

        ca_qqbar_cos_pi(x, p, q);
        ca_qqbar_get_arb(z, x, prec);

        fmpq_set_si(t, p, q);
        arb_cos_pi_fmpq(w, t, prec);

        if (!arb_overlaps(z, w))
        {
            flint_printf("FAIL!\n");
            flint_printf("x = "); ca_qqbar_print(x); flint_printf("\n\n");
            flint_printf("z = "); arb_printn(z, 200, 0); flint_printf("\n\n");
            flint_printf("w = "); arb_printn(z, 200, 0); flint_printf("\n\n");
            flint_printf("p, q = %wd %wu\n\n", p, q);
            flint_abort();
        }

        ca_qqbar_clear(x);
        arb_clear(z);
        arb_clear(w);
        fmpq_clear(t);
    }

    flint_randclear(state);
    flint_cleanup();
    flint_printf("PASS\n");
    return EXIT_SUCCESS;
}
