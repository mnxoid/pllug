#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block
{
    static int N;
public:
    /**
     * @brief Constructor (outputs the block header)
     **/
    Block();
    /**
     * @brief Constructor (outputs the block header with a message)
     * @param [in] message - the message
     **/
    Block(std::string message);
    /**
     * @brief Destructor (outputs the block footer)
     **/
    ~Block();
};

#endif // BLOCK_H
