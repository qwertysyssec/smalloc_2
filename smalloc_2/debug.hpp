#ifndef UUID_810453D9_5E92_413E_A4A3_95FA4EE50048
#define UUID_810453D9_5E92_413E_A4A3_95FA4EE50048

#include <cassert>
#include "details.hpp"

#ifndef NDEBUG
#define  assert__     assert((max_align-1)==((~address)&(max_align-1)));                    \
                      assert(nullptr!=reinterpret_cast<void*>(address));                    \
                      assert((max_align-1)==((~size)&(max_align-1)));                       \
                      assert(0!=size);                                                      \
                      assert((address-1)<=(std::numeric_limits<std::size_t>::max()-size));
#else
#define assert__ (void(0))
#endif

#endif
