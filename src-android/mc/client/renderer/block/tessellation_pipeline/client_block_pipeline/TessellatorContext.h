#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class LevelRenderer;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

namespace ClientBlockPipeline {

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

} // namespace ClientBlockPipeline
