#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangEvalParams;
struct MolangScriptArg;
namespace Molang::details { class IInstruction; }
// clang-format on

namespace Molang::details {

class Program {
public:
    // Program inner types declare
    // clang-format off
    struct UnpackedInstruction;
    // clang-format on

    // Program inner types define
    struct UnpackedInstruction {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, void (*)(::MolangEvalParams&, void*)> mCode;
        ::ll::TypedStorage<8, 8, ::Molang::details::IInstruction*>     mData;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkb67df9;
        ::ll::UntypedStorage<8, 8> mUnkb78589;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Func = void (*)(::MolangEvalParams&, void*);
#else // @header-generator platform
    public:
        // prevent constructor by default
        UnpackedInstruction& operator=(UnpackedInstruction const&);
        UnpackedInstruction(UnpackedInstruction const&);
        UnpackedInstruction();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<uchar[]>> mInstructionStorage;
    ::ll::TypedStorage<4, 4, uint>                     mInstructionCount;
    ::ll::TypedStorage<1, 1, bool>                     mStoreStackState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb55123;
    ::ll::UntypedStorage<4, 4> mUnkdf34c4;
    ::ll::UntypedStorage<1, 1> mUnkebc975;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Program(Program const&);
    Program();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Program(std::vector<std::unique_ptr<Molang::details::IInstruction>>, bool);
#else // @header-generator platform
    MCNAPI
    Program(::std::vector<::std::unique_ptr<::Molang::details::IInstruction>> instructions, bool storeStackState);

    MCNAPI ::MolangScriptArg const& execute(::RenderParams& renderParams, ::MolangEvalParams& state) const;

    MCNAPI ::Molang::details::Program& operator=(::Molang::details::Program const& rhs);

    MCNAPI ~Program();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<std::unique_ptr<Molang::details::IInstruction>>, bool);
#else // @header-generator platform
    MCNAPI void*
    $ctor(::std::vector<::std::unique_ptr<::Molang::details::IInstruction>> instructions, bool storeStackState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Molang::details
