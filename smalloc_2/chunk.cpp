#include "chunk.hpp"
#include <tuple>
#include "debug.hpp"

chunk::chunk(std::uintptr_t   address_,
             std::size_t         size_,
             busyness           state_)
: address(address_), size(size_), state(state_)
{
assert__;
}


//getters
const std::uintptr_t& chunk::get_address() const {
    return address;
}
const std::size_t& chunk::get_size() const{
    return size;
}
const chunk::busyness& chunk::get_state() const {
    return state;
}

//setters
void chunk::change_address(std::uintptr_t address_){
    address=address_;

assert__;
}
void chunk::change_size(std::size_t size_){
    size=size_;

assert__;
}
void chunk::change_state(busyness state_){
    state=state_;
}


bool chunk::operator < (const chunk& rhs) const{
    return std::tie(get_state(), get_size() ,get_address())<std::tie(rhs.get_state(), rhs.get_size(), rhs.get_address());
}




