#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/persona/DefaultSkinType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace persona {

class DefaultSkin {
public:
    // DefaultSkin inner types declare
    // clang-format off
    struct Names;
    // clang-format on

    // DefaultSkin inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Names {
    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::std::add_lvalue_reference_t<char const[5]> Alex();

        MCNAPI static ::std::add_lvalue_reference_t<char const[4]> Ari();

        MCNAPI static ::std::add_lvalue_reference_t<char const[7]> Custom();

        MCNAPI static ::std::add_lvalue_reference_t<char const[11]> CustomSlim();

        MCNAPI static ::std::add_lvalue_reference_t<char const[6]> Dummy();

        MCNAPI static ::std::add_lvalue_reference_t<char const[4]> Efe();

        MCNAPI static ::std::add_lvalue_reference_t<char const[4]> Kai();

        MCNAPI static ::std::add_lvalue_reference_t<char const[7]> Makena();

        MCNAPI static ::std::add_lvalue_reference_t<char const[5]> Noor();

        MCNAPI static ::std::add_lvalue_reference_t<char const[6]> Steve();

        MCNAPI static ::std::add_lvalue_reference_t<char const[6]> Sunny();

        MCNAPI static ::std::add_lvalue_reference_t<char const[5]> Zuri();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getCustomSkinName(::persona::DefaultSkinType);

    MCNAPI static std::string getCustomSkinNameFromGeo(std::string const&);

    MCNAPI static uchar getDefaultCastCount();

    MCNAPI static ::persona::DefaultSkinType getDefaultSkinTypeFromName(std::string const&);

    MCNAPI static std::string getSkinName(::persona::DefaultSkinType);

    MCNAPI static ::mce::UUID const& getSkinPackUUID();

    MCNAPI static std::string getSkinSerializedName(::persona::DefaultSkinType);

    MCNAPI static bool isCustomSkinName(std::string const&);

    MCNAPI static bool isDefaultableGeometryName(std::string const&);

    MCNAPI static bool isSkinPackUUID(::mce::UUID const&);
    // NOLINTEND
#else // @header-generator platform
    struct Names {};
#endif // @header-generator platform
};

} // namespace persona
