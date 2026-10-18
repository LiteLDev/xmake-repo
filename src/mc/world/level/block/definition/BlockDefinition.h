#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/DefinitionEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"
#include "mc/world/level/block/definition/BlockDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/definition/BlockPermutationDescription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class DefinitionEvent;
#endif // @header-generator platform
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
#else // @header-generator platform
struct BlockPermutationDescription;
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                 mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                               mMinEngineVersion;
    ::ll::UntypedStorage<8, 24>                                                 mOriginalJsonVersion;
    ::ll::TypedStorage<8, 200, ::BlockDescription>                              mDescription;
    ::ll::TypedStorage<8, 88, ::BlockComponentGroupDescription>                 mBaseComponents;
    ::ll::TypedStorage<8, 24, std::vector<BlockPermutationDescription>>         mPermutationDescriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinition(::BlockDefinition const&);

    MCNAPI BlockDefinition(::BlockDefinition&&);

    MCNAPI ~BlockDefinition();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                                     mMinEngineVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mOriginalJsonVersion;
    ::ll::TypedStorage<8, 240, ::BlockDescription>                                    mDescription;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription>                      mBaseComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPermutationDescription>>           mPermutationDescriptions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockDefinition const&);

    MCNAPI void* $ctor(::BlockDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};
