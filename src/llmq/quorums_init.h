// Copyright (c) 2018-2021 The Dash Core developers
// Copyright (c) 2021 The DogeCash developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DogeCash_LLMQ_INIT_H
#define DogeCash_LLMQ_INIT_H

class CDBWrapper;
class CEvoDB;

namespace llmq
{

// Init/destroy LLMQ globals
void InitLLMQSystem(CEvoDB& evoDb);
void DestroyLLMQSystem();

// Manage scheduled tasks, threads, listeners etc.
void StartLLMQSystem();
void StopLLMQSystem();

} // namespace llmq

#endif // DogeCash_LLMQ_INIT_H
