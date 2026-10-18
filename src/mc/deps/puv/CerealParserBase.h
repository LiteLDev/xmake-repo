#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/ParserBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SemVersion;
namespace Puv { class VersionRange; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv {

class CerealParserBase : public ::Puv::ParserBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCtx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkf078ff;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealParserBase& operator=(CerealParserBase const&);
    CerealParserBase(CerealParserBase const&);
    CerealParserBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CerealParserBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CerealParserBase(::cereal::ReflectionCtx const& ctx, ::SemVersion const& parserVersion);
#endif

    MCNAPI CerealParserBase(
        ::cereal::ReflectionCtx const& ctx,
        ::SemVersion                   parserVersion,
        ::Puv::VersionRange            supportedRange
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::SemVersion const& parserVersion);
#endif

    MCNAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::SemVersion parserVersion, ::Puv::VersionRange supportedRange);
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
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv
