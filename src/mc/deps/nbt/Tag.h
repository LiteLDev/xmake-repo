#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
enum class SnbtFormat : uint {
    Minimize           = 0,
    CompoundLineFeed   = 1 << 0,
    ArrayLineFeed      = 1 << 1,
    Colored            = 1 << 2,
    Console            = 1 << 3,
    ForceAscii         = 1 << 4,
    ForceQuote         = 1 << 5,
    CommentMarks       = 1 << 6,
    Jsonify            = ForceQuote | CommentMarks,
    PartialLineFeed    = CompoundLineFeed,
    AlwaysLineFeed     = CompoundLineFeed | ArrayLineFeed,
    PrettyFilePrint    = PartialLineFeed,
    PrettyChatPrint    = PrettyFilePrint | Colored,
    PrettyConsolePrint = PrettyFilePrint | Colored | Console,
};
[[nodiscard]] constexpr SnbtFormat operator|(SnbtFormat const l, SnbtFormat const r) noexcept {
    return static_cast<SnbtFormat>(
        static_cast<std::underlying_type_t<SnbtFormat>>(l) | static_cast<std::underlying_type_t<SnbtFormat>>(r)
    );
}
[[nodiscard]] constexpr SnbtFormat operator&(SnbtFormat const l, SnbtFormat const r) noexcept {
    return static_cast<SnbtFormat>(
        static_cast<std::underlying_type_t<SnbtFormat>>(l) & static_cast<std::underlying_type_t<SnbtFormat>>(r)
    );
}

#endif // @header-generator platform
class Tag {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
protected:
    constexpr Tag() = default;

#endif // @header-generator platform
public:
    // Tag inner types define
    enum class Type : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
        End         = 0,
        Byte        = 1,
        Short       = 2,
        Int         = 3,
        Int64       = 4,
        Float       = 5,
        Double      = 6,
        ByteArray   = 7,
        String      = 8,
        List        = 9,
        Compound    = 10,
        IntArray    = 11,
        NumTagTypes = 12,
#else // @header-generator platform
        End         = 0x0,
        Byte        = 0x1,
        Short       = 0x2,
        Int         = 0x3,
        Int64       = 0x4,
        Float       = 0x5,
        Double      = 0x6,
        ByteArray   = 0x7,
        String      = 0x8,
        List        = 0x9,
        Compound    = 0xA,
        IntArray    = 0xB,
        NumTagTypes = 0xC,
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using enum Type;

    template <std::derived_from<Tag> T>
    T const* as_ptr() const {
        return static_cast<T const*>(this);
    }
    template <std::derived_from<Tag> T>
    T* as_ptr() {
        return static_cast<T*>(this);
    }
    template <std::derived_from<Tag> T>
    T const& as() const {
        return *static_cast<T const*>(this);
    }
    template <std::derived_from<Tag> T>
    T& as() {
        return *static_cast<T*>(this);
    }

    [[nodiscard]] bool operator==(Tag const& other) const { return equals(other); }

    LLNDAPI std::string toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const noexcept;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Tag();
#else // @header-generator platform
    virtual ~Tag() = default;
#endif // @header-generator platform

    virtual void deleteChildren();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::IDataOutput&) const = 0;
#else // @header-generator platform
    virtual void write(::IDataOutput& dos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const = 0;
#else // @header-generator platform
    virtual ::std::string toString() const = 0;
#endif // @header-generator platform

    virtual ::Tag::Type getId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool equals(::Tag const&) const;
#else // @header-generator platform
    virtual bool equals(::Tag const& rhs) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    virtual void print(::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(::PrintStream&) const;
#else // @header-generator platform
    virtual void print(::std::string const& prefix, ::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> copy() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> copy() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong hash() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    Tag() = default;
#else // @header-generator platform
    virtual uint64 hash() const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getTagName(::Tag::Type);

    MCNAPI static ::Bedrock::Result<std::unique_ptr<Tag>, std::error_code> newTag(::Tag::Type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NullString();
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
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::std::unique_ptr<::Tag>> newTag(::Tag::Type type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deleteChildren();
#else // @header-generator platform
    MCFOLD void $deleteChildren();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $equals(::Tag const&) const;
#else // @header-generator platform
    MCAPI void $print(::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    MCAPI void $print(::std::string const& prefix, ::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $print(::PrintStream&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform

// Keep the first virtual destructor as the AArch64 ABI key function.
inline Tag::~Tag() = default;
#else // @header-generator platform
#endif // @header-generator platform
