#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/external/render_dragon/resources/TextureUsage.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureDescription : public ::cg::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>           mIdentifier;
    ::ll::TypedStorage<8, 8, ::dragon::TextureUsage> mUsage;
    ::ll::TypedStorage<1, 2, std::optional<bool>>    mValidateSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextureDescription {};
#endif // @header-generator platform

} // namespace dragon
