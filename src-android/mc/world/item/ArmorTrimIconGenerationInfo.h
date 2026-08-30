#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

class ArmorTrimIconGenerationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mTrimmedArmorName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mArmorTextureLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimTextureLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimmedArmorLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimKeyPaletteLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimValuePaletteLocation;
    ::ll::TypedStorage<1, 1, bool>                mIsLeatherArmor;
    ::ll::TypedStorage<1, 1, bool>                mIsValid;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArmorTrimIconGenerationInfo(::ArmorTrimIconGenerationInfo const&);

    MCNAPI ArmorTrimIconGenerationInfo(
        std::string const&,
        std::string const&,
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ::ResourceLocation const& getArmorTextureLocation() const;

    MCNAPI ::ResourceLocation const& getTrimKeyPaletteLocation() const;

    MCNAPI ::ResourceLocation const& getTrimTextureLocation() const;

    MCNAPI ::ResourceLocation const& getTrimValuePaletteLocation() const;

    MCNAPI ::ResourceLocation const& getTrimmedArmorLocation() const;

    MCNAPI bool isLeatherArmor() const;

    MCNAPI bool isValid() const;

    MCNAPI ~ArmorTrimIconGenerationInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string buildTrimmedArmorName(std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ArmorTrimIconGenerationInfo const&);

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
