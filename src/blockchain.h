#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace Blockchain {
    
    class Transaction {
    private:
        std::string sender_id;
        std::string receiver_id;
        double amount;
    public:
        Transaction(std::string sender, std::string receiver, double amt);
        void print() const;
    };

    class Block {
    public:
        int id_block;
        int id_prev;
        std::vector<Transaction> t_actions_lst;
        Block(int id_block, int id_prev, const std::vector<Transaction>& t_actions_lst_argv);
        void print() const;
    };

    class Blockchain {
    private:
        int id_first;
        std::vector<Block> chain;
        Block create_first_block();
    public:
        Blockchain();
        void add_block(const std::vector<Transaction>& tran_list);
        void print_chain() const;
    };
}
