#ifndef UUID_29D2BAB5_8C0F_4DC3_8117_FF52C654BC82
#define UUID_29D2BAB5_8C0F_4DC3_8117_FF52C654BC82

#include <cstddef>
#include <cstdint>






class chunk{
public:

enum busyness {busy, free};

//constructors
chunk() = delete;

chunk(std::uintptr_t   address_,
      std::size_t         size_,
      busyness           state_);


//getters
const std::uintptr_t& get_address() const;

const std::size_t& get_size() const;

const busyness& get_state() const;


//setters
void change_address(std::uintptr_t address_);

void change_size(std::size_t size_);

void change_state(busyness state_);


bool operator < (const chunk& rhs) const;


private:
std::uintptr_t   address;
std::size_t      size;
busyness         state;
};

#endif
