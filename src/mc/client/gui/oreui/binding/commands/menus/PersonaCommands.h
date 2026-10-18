#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PersonaClient;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PersonaClient;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class PersonaCommands : public ::OreUI::CommandGroupBase<OreUI::PersonaCommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mEquipDefaultSkin;
    ::ll::UntypedStorage<8, 16>  mPersonaClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCommands& operator=(PersonaCommands const&);
    PersonaCommands(PersonaCommands const&);
    PersonaCommands();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaCommands();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaCommands(::OreUI::ClientDependencies const&);

    MCNAPI void _equipDefaultSkin();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[16]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PersonaCommands : public ::OreUI::CommandGroupBase<::OreUI::PersonaCommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mEquipDefaultSkin;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                      mPersonaClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCommands& operator=(PersonaCommands const&);
    PersonaCommands(PersonaCommands const&);
    PersonaCommands();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PersonaCommands(::OreUI::ClientDependencies const& client);

    MCAPI void _equipDefaultSkin();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PersonaCommands {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
