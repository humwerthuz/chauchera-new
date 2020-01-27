bool is_block_version_broken (uint256 block_hash){
    if (block_hash == uint256S("f53292f5fdf64fae715b92e06c0804c64541c6121f6942bc9c2afcb2d3010d4e") ||
        block_hash == uint256S("4f092acf867d244076d15930dffef43f73fce9f51ebb8d4eeacbb1138149990b") ||
        block_hash == uint256S("afa1715c253c6c3d4c39d762833f12d642745d720048c96b8a1281d5710f9c4e") ||
        block_hash == uint256S("73cedd4225c7d18649ee1bfdf00645d31e052cf6799721903c52da62f6e5150d") ||
        block_hash == uint256S("c267187d1aec832ced4f877486c7e5c40011c1e5be01547b0c883fc4f74ff173") ||
        block_hash == uint256S("41ec07686bc75f9ac64d62ffc357eb4aa84751c96cac72dacd028be8232c85dc") ||
        block_hash == uint256S("c9d7f827718acccd2accda07c983fd9cccace261aa530873aa3cbfa4cd39274f") ||
        block_hash == uint256S("546398e131206e19467668e4e0592228eade66f04e95053c11a4e4dce43c2115") ||
        block_hash == uint256S("8ca157ba0aea00f816d75149d0e8616a5e9dfa2fdd0c380e601038a9f0692774")
    ){
        return true;
    } else {
        return false;
    }
}
