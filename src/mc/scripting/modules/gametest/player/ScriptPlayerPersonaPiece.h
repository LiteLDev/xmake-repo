#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/PieceType.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerPersonaPiece {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      pieceId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    pieceId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> pieceType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      packId;
    ::ll::TypedStorage<1, 2, std::optional<bool>>               isDefaultPiece;
    ::ll::TypedStorage<8, 24, std::string>                      productId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    packId;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>             isDefaultPiece;
    ::ll::TypedStorage<8, 32, ::std::string>                    productId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlayerPersonaPiece();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerPersonaPiece(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);
#else // @header-generator platform
    MCAPI ScriptPlayerPersonaPiece(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptPlayerPersonaPiece();
#else // @header-generator platform
    MCAPI ::ScriptModuleGameTest::ScriptPlayerPersonaPiece&
    operator=(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);

    MCAPI ~ScriptPlayerPersonaPiece();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
