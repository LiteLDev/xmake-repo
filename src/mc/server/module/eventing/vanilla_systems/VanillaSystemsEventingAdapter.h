#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/vanilla_systems/eventing/IVanillaSystemsEventingAdapter.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace VanillaSystems {

class VanillaSystemsEventingAdapter : public ::VanillaSystems::IVanillaSystemsEventingAdapter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mEventing;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkfaffcb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    VanillaSystemsEventingAdapter& operator=(VanillaSystemsEventingAdapter const&);
    VanillaSystemsEventingAdapter(VanillaSystemsEventingAdapter const&);
#endif // @header-generator platform
    VanillaSystemsEventingAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaSystemsEventingAdapter();

    virtual void doFireEventActorValueValidationFailed(std::string const&, char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $doFireEventActorValueValidationFailed(std::string const&, char const*);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
