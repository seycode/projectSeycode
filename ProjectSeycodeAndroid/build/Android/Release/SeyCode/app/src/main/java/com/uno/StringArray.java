package com.uno;
import com.uno.UnoObject;

public class StringArray extends UnoObject
{
    public StringArray(long ptr) {
        super(ptr);
    }

    public String get(int index) {
        return com.Bindings.ExternedBlockHost.getString(this, index);
    }

    public String set(int index, String val) {
        return com.Bindings.ExternedBlockHost.setString(this, index, val);
    }

    public String[] copyArray()
    {
        return (String[])com.Bindings.ExternedBlockHost.copyStringArray(this);
    }
}
