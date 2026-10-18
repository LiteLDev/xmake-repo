#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/LinkedList.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct HuffmanEncodingTreeNode;
// clang-format on

namespace RakNet {

class HuffmanEncodingTree {
public:
    // HuffmanEncodingTree inner types declare
    // clang-format off
    struct CharacterEncoding;
    // clang-format on

    // HuffmanEncodingTree inner types define
    struct CharacterEncoding {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, uchar*> encoding;
        ::ll::TypedStorage<2, 2, ushort> bitLength;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkb5d9ec;
        ::ll::UntypedStorage<2, 2> mUnk85bf63;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CharacterEncoding& operator=(CharacterEncoding const&);
        CharacterEncoding(CharacterEncoding const&);
        CharacterEncoding();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::HuffmanEncodingTreeNode*>                               root;
    ::ll::TypedStorage<8, 4096, ::RakNet::HuffmanEncodingTree::CharacterEncoding[256]> encodingTable;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>    mUnk9c3a19;
    ::ll::UntypedStorage<8, 4096> mUnkffa0a4;
    // NOLINTEND

public:
    // prevent constructor by default
    HuffmanEncodingTree& operator=(HuffmanEncodingTree const&);
    HuffmanEncodingTree(HuffmanEncodingTree const&);
    HuffmanEncodingTree();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FreeMemory();

    MCAPI void GenerateFromFrequencyTable(uint* const frequencyTable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void InsertNodeIntoSortedList(
        ::HuffmanEncodingTreeNode*                                node,
        ::DataStructures::LinkedList<::HuffmanEncodingTreeNode*>* huffmanEncodingTreeNodeList
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
