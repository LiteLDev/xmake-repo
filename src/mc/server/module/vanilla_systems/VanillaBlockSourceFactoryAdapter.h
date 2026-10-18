#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/IBlockSourceFactoryAdapter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

class VanillaBlockSourceFactoryAdapter : public ::VanillaSystems::IBlockSourceFactoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::EntityRegistry&> mRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkdaffcc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockSourceFactoryAdapter& operator=(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaBlockSourceFactoryAdapter();

    virtual std::unique_ptr<VanillaSystems::IOwnedConstBlockSource> createBlockSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> createBlockSource() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<VanillaSystems::IOwnedConstBlockSource> $createBlockSource();
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> $createBlockSource();
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
