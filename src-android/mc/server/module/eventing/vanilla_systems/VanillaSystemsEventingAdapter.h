#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/vanilla_systems/eventing/IVanillaSystemsEventingAdapter.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

namespace VanillaSystems {

class VanillaSystemsEventingAdapter : public ::VanillaSystems::IVanillaSystemsEventingAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaSystemsEventingAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSystemsEventingAdapter();

    virtual void doFireEventActorValueValidationFailed(std::string const&, char const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doFireEventActorValueValidationFailed(std::string const&, char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
