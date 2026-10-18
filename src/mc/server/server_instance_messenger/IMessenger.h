#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ServerInstanceMessenger { class IMessageConsumer; }
namespace ServerInstanceMessenger { class IMessageProducer; }
// clang-format on

#endif // @header-generator platform
namespace ServerInstanceMessenger {

#if defined(LL_PLAT_A) // @header-generator platform
class IMessenger {};
#else // @header-generator platform
class IMessenger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessenger() = default;

    virtual ::ServerInstanceMessenger::IMessageProducer& getProducer() = 0;

    virtual ::ServerInstanceMessenger::IMessageConsumer& getConsumer() = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ServerInstanceMessenger
