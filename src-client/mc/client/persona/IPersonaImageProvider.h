#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
namespace mce { struct TextureResourceService; }
// clang-format on

class IPersonaImageProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaImageProvider();

    virtual std::shared_ptr<const mce::Image> getImage(std::string const&) = 0;

    virtual void addImage(std::string const&, std::shared_ptr<mce::Image>) = 0;

    virtual void removeImage(std::string const&) = 0;

    virtual ::mce::TextureResourceService& getTextureResourceService() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
