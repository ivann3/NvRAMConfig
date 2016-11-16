#Customization NvRam
    Custom_Battery

##Step by Step to add NvRam data

###cfgfileinc
* 1.CFG_CUSTOM_BATTERY_File.h
    *  Add the header file which describes the defination of its record:
      
    *  record: "data structure", "record size", "record numbers

###cfgdefault
* 2.CFG_CUSTOM_BATTERY_Default.h
    *  Add the header file which define its default value of NvRam file

###inc
* 3.Custom_NvRam_LID.h
    *  Add one lid in the enum definition of "CSUTOM_CFG_FILE_LID" 
      
         * The newest lid must add at the end of hte definition table.(before MAX_LID)

    *  define the version number of NvRam file
      
* 4.custom_cfg_module_file.h
    *  add include path: your CUSTOM_File.h which describes the defination of its record 
      
* 5.custom_cfg_module_default.h
    *  add include path: your CUSTOM_Default.h which define its default value of NvRam file 
      
* 6.CFG_file_info_custom.h
    *  Add the related inforamtaion of NaRam file into the definition of "g_akCFG_File_Custom"
    
* 7.Custom_NvRam_data_item.h
    *  Add its related inforamtion, including record structure, NvRam lid, and record number
    
    
## Attention
*  Use the QR Code Scanner.apk save data in Custom_Battery File
*  Due to the CUSTOM_BATTERY "data structure" is difined: unsigned char info [2], so the data must be a string of two chars
    *  EXAMPLE: "01","79","63"
*  Custom_Battery file path: data/nvram/APCFG/APRDEB/Custom_Battery

## SAMPLE File
*  Before you Customize your NvRam File, suggest you see the SAMPLE File First

## QR Code Generate
*  http://www.liantu.com/



