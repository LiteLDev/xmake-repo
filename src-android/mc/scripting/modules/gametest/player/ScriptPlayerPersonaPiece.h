#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerPersonaPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      pieceId;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> pieceType;
    ::ll::TypedStorage<8, 24, std::string>                      packId;
    ::ll::TypedStorage<1, 2, std::optional<bool>>               isDefaultPiece;
    ::ll::TypedStorage<8, 24, std::string>                      productId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerPersonaPiece(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);

    MCNAPI ~ScriptPlayerPersonaPiece();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
