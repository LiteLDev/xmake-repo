#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IBlockSourceFactoryAdapter; }
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

struct BlockSourceFactoryAdapterComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<VanillaSystems::IBlockSourceFactoryAdapter*>> mFactoryAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IOwnedConstBlockSource>>      mTemporarySource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::VanillaSystems::IBlockSourceFactoryAdapter*>> mFactoryAdapter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource>>    mTemporarySource;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockSourceFactoryAdapterComponent& operator=(BlockSourceFactoryAdapterComponent const&);
    BlockSourceFactoryAdapterComponent(BlockSourceFactoryAdapterComponent const&);
    BlockSourceFactoryAdapterComponent();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace VanillaSystems
