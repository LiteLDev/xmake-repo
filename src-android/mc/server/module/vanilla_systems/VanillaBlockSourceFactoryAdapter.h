#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/IBlockSourceFactoryAdapter.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

class VanillaBlockSourceFactoryAdapter : public ::VanillaSystems::IBlockSourceFactoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntityRegistry&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockSourceFactoryAdapter& operator=(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaBlockSourceFactoryAdapter();

    virtual std::unique_ptr<VanillaSystems::IOwnedConstBlockSource> createBlockSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<VanillaSystems::IOwnedConstBlockSource> $createBlockSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
