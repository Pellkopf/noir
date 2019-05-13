#ifndef SIGMA_PARAMS_H
#define SIGMA_PARAMS_H

// Block after which sigma mints are activated.
#define ZC_SIGMA_STARTING_BLOCK         300000
#define ZC_SIGMA_TESTNET_STARTING_BLOCK 5000

// Number of blocks after ZC_SIGMA_STARTING_BLOCK during which we still accept zerocoin V2 mints into mempool.
#define ZC_V2_MINT_GRACEFUL_MEMPOOL_PERIOD          4500
#define ZC_V2_MINT_TESTNET_GRACEFUL_MEMPOOL_PERIOD  500

// Number of blocks after ZC_SIGMA_STARTING_BLOCK during which we still accept zerocoin V2 mints to newly mined blocks.
#define ZC_V2_MINT_GRACEFUL_PERIOD          5000
#define ZC_V2_MINT_TESTNET_GRACEFUL_PERIOD  1000

// Number of blocks after ZC_SIGMA_STARTING_BLOCK during which we still accept zerocoin V2 spends into mempool.
#define ZC_V2_SPEND_GRACEFUL_MEMPOOL_PERIOD         9000
#define ZC_V2_SPEND_TESTNET_GRACEFUL_MEMPOOL_PERIOD 1500

// Number of blocks after ZC_SIGMA_STARTING_BLOCK during which we still accept zerocoin V2 spends to newly mined blocks.
#define ZC_V2_SPEND_GRACEFUL_PERIOD         10000
#define ZC_V2_SPEND_TESTNET_GRACEFUL_PERIOD 2000

// Number of coins per id in spend v3.0
#define ZC_SPEND_V3_COINSPERID          15000

#endif // SIGMA_PARAMS_H