#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/external/render_dragon/resources/ImageDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureRead.h"
#include "mc/external/render_dragon/tasks/DeferredResult.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on

namespace dragon {

class ResolvedImageResource {
public:
    // ResolvedImageResource inner types define
    enum class State : uchar {
        Uninitialized = 0,
        Loading       = 1,
        Ready         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer>                       mImageBuffer;
    ::ll::TypedStorage<1, 1, ::dragon::ResolvedImageResource::State>   mState;
    ::ll::TypedStorage<4, 24, std::optional<dragon::ImageDescription>> mImageDescription;
    ::ll::TypedStorage<8, 64, std::optional<dragon::res::TextureRead>> mTextureRead;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedImageResource& operator=(ResolvedImageResource const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer getImageBufferCopy() const;

    MCNAPI bool isValid() const;

    MCNAPI ::dragon::ResolvedImageResource& operator=(::dragon::ResolvedImageResource&&);

    MCNAPI ::dragon::ImageDescription
    readTexture(::mce::ServerResourcePointer<dragon::ResolvedTextureResource>&, ::dragon::tasks::GraphicsTasks&, bool);

    MCNAPI void setImageDescription(std::optional<dragon::ImageDescription>);
    // NOLINTEND
};

} // namespace dragon
