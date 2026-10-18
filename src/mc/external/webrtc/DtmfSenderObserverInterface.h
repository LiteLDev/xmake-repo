#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfSenderObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnToneChange(::std::string const&, ::std::string const&);

    virtual void OnToneChange(::std::string const&);

    virtual ~DtmfSenderObserverInterface() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
