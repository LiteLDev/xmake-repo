#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/UriListener.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class OptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsUriListener : public ::UriListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUriListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsUriListener();

    virtual void onUri(::ActivationUri const&);

    virtual void tick();

    virtual void executeStartupUris();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsUriListener(std::shared_ptr<OptionRegistry>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<OptionRegistry>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const&);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsUriListener {};
#endif // @header-generator platform

} // namespace Social
