#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/external/bgfx/VertexDecl.h"
#include "mc/external/bgfx/VertexDeclHandle.h"
#include "mc/external/render_dragon/endstone/Guarded.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class Pass; }
namespace dragon::mesh { struct VertexFormat; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::mesh {

class VertexDeclManager {
public:
    // VertexDeclManager inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // VertexDeclManager inner types define
    struct Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct DeclLayout;
        struct ValidationKey;
        // clang-format on

        // Impl inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct DeclLayout {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle> mHandle;
            ::ll::TypedStorage<4, 84, ::bgfx::VertexDecl>      mDecl;
            // NOLINTEND
        };
#else // @header-generator platform
        struct DeclLayout {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        struct ValidationKey {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, uint>  mMaterial;
            ::ll::TypedStorage<8, 8, ulong> mPass;
            ::ll::TypedStorage<4, 4, uint>  mVertexDecl;
            // NOLINTEND
        };

        using HashType = uint;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mHashTable;
        ::ll::UntypedStorage<8, 184> mHandleTable;
        ::ll::UntypedStorage<8, 112> mValidationCache;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::optional<ushort> getOrCreateHandle(::bgfx::VertexDecl const&);

        MCNAPI ::bgfx::VertexDecl const* tryFindDecl(::bgfx::VertexDeclHandle const) const;

        MCNAPI bool validateEquivalentFormat(::dragon::materials::Pass const&, ::bgfx::VertexDecl const&) const;

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        struct ValidationKey {};
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using HashType = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::mesh::VertexDeclManager::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexDeclManager& operator=(VertexDeclManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VertexDeclManager();

    MCNAPI std::optional<ushort> getOrCreateHandle(::bgfx::VertexDecl const&);

    MCNAPI ::bgfx::VertexDecl const* tryFindDecl(std::optional<ushort> const) const;

    MCNAPI bool validateEquivalentFormat(::dragon::materials::Pass const&, ::bgfx::VertexDecl const&) const;

    MCNAPI ~VertexDeclManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::bgfx::VertexDeclHandle getBgfxHandle(std::optional<ushort> const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace dragon::mesh
