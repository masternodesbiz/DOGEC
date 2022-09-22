// Copyright (c) 2015-2020 The Zcash developers
// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2020 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef DogeCash_SAPLING_CORE_WRITE_H
#define DogeCash_SAPLING_CORE_WRITE_H

#include "primitives/transaction.h"
#include <univalue.h>

// Format Sapling tx information in json.
void TxSaplingToJSON(const CTransaction& tx, UniValue& entry);

#endif //DogeCash_SAPLING_CORE_WRITE_H
