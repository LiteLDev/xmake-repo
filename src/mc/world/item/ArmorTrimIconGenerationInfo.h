#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

class ArmorTrimIconGenerationInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mTrimmedArmorName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mArmorTextureLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimTextureLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimmedArmorLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimKeyPaletteLocation;
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mTrimValuePaletteLocation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mTrimmedArmorName;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mArmorTextureLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimTextureLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimmedArmorLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimKeyPaletteLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mTrimValuePaletteLocation;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                mIsLeatherArmor;
    ::ll::TypedStorage<1, 1, bool>                mIsValid;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo& operator=(ArmorTrimIconGenerationInfo const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ArmorTrimIconGenerationInfo();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ArmorTrimIconGenerationInfo(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string buildTrimmedArmorName(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string buildTrimmedArmorName(::std::string const& trimMaterial, ::std::string const& armorName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&      armorName,
        ::std::string const&      armorType,
        ::ResourceLocation const& armorTextureLocation,
        ::ResourceLocation const& trimTextureLocation,
        ::std::string const&      armorMaterial,
        ::std::string const&      trimMaterial,
        ::std::string const&      trimPalette
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
