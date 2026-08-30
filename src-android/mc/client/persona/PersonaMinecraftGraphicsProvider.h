#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/IPersonaImageProvider.h"

// auto generated forward declare list
// clang-format off
class MinecraftGraphics;
namespace mce { struct Image; }
namespace mce { struct TextureResourceService; }
// clang-format on

class PersonaMinecraftGraphicsProvider : public ::IPersonaImageProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftGraphics&> mGraphics;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaMinecraftGraphicsProvider& operator=(PersonaMinecraftGraphicsProvider const&);
    PersonaMinecraftGraphicsProvider(PersonaMinecraftGraphicsProvider const&);
    PersonaMinecraftGraphicsProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaMinecraftGraphicsProvider();

    virtual std::shared_ptr<const mce::Image> getImage(std::string const&);

    virtual void addImage(std::string const&, std::shared_ptr<mce::Image>);

    virtual void removeImage(std::string const&);

    virtual ::mce::TextureResourceService& getTextureResourceService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaMinecraftGraphicsProvider(::MinecraftGraphics&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGraphics&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<const mce::Image> $getImage(std::string const&);

    MCNAPI void $addImage(std::string const&, std::shared_ptr<mce::Image>);

    MCNAPI void $removeImage(std::string const&);

    MCNAPI ::mce::TextureResourceService& $getTextureResourceService();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
