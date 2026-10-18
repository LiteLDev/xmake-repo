#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class LevelRenderer;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class TessellatorContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mSchematicsRepo;
    ::ll::TypedStorage<1, 1, bool> mTextureShiftsEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    TessellatorContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TessellatorContext(::IMinecraftGame const&);

    MCNAPI explicit TessellatorContext(::LevelRenderer const&);

    MCNAPI std::shared_ptr<ClientBlockPipeline::MaterialRepository> getMaterialRepository() const;

    MCNAPI bool getTextureShiftsEnabled() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame const&);

    MCNAPI void* $ctor(::LevelRenderer const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TessellatorContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ClientBlockPipeline::SchematicsRepository>>
                                   mSchematicsRepo;
    ::ll::TypedStorage<1, 1, bool> mTextureShiftsEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    TessellatorContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TessellatorContext(::IMinecraftGame const& game);

    MCAPI ~TessellatorContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame const& game);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TessellatorContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
