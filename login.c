#include<stdio.h>
#include<gtk/gtk.h>


int main(int argc ,char *argv[])
{

	GtkWidget *login_window;
	GtkWidget *login_table0;
	GtkWidget *login_table1;
	GtkWidget *login_table2;
	GtkWidget *login_table3;
	GtkWidget *login_ok_btn;
	GtkWidget *login_cancel_btn;
	GtkWidget *name_entry;
	GtkWidget *pwd_entry;
	GtkWidget *name_lable;
        GtkWidget *pwd_lable;
	GtkWidget *login_lable;

	gtk_init(&argc,&argv);			//GTK初始化
	
	 		/*组件初始化*/
	login_window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	login_table0=gtk_table_new(3,1,FALSE);
	login_table1=gtk_table_new(1,1,FALSE);
	login_table2=gtk_table_new(3,2,FALSE);
	login_table3=gtk_table_new(1,2,FALSE);
	login_ok_btn=gtk_button_new_with_label("登录");
	login_cancel_btn=gtk_button_new_with_label("退出");
	name_entry=gtk_entry_new();
	pwd_entry=gtk_entry_new();
	name_lable=gtk_label_new("用户名");
	pwd_lable=gtk_label_new("密码");
	login_lable=gtk_label_new("登录信息");

			/*窗口主体初始化设定*/
	gtk_window_set_title(GTK_WINDOW(login_window),"用户登录");
	gtk_window_set_usize(login_window,300,300);
	gtk_window_set_position(GTK_WINDOW(login_window),
				GTK_WIN_POS_CENTER_ALWAYS);
	
	
			/*窗口标题*/
	gtk_table_attach(GTK_TABLE(login_table1),login_lable,0,1,0,1,(GtkAttachOptions)(0),
			(GtkAttachOptions)(0),5,5);

			/*登录信息*/
	gtk_table_attach(GTK_TABLE(login_table2),name_lable,0,1,0,1,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table2),pwd_lable,0,1,1,2,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table2),name_entry,1,2,0,1,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table2),pwd_entry,1,2,1,2,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);

			/*登录选项*/

	gtk_table_attach(GTK_TABLE(login_table3),login_ok_btn,0,1,0,1,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table3),login_cancel_btn,1,2,0,1,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	
			/*把各个表格加载进窗口*/
	gtk_container_add(GTK_CONTAINER(login_window),login_table0);
	gtk_table_attach(GTK_TABLE(login_table0),login_table1,0,1,0,1,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table0),login_table2,0,1,1,2,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);
	gtk_table_attach(GTK_TABLE(login_table0),login_table3,0,1,2,3,(GtkAttachOptions)(0),
                        (GtkAttachOptions)(0),5,5);



	gtk_widget_show_all();
	gtk_main();	

	return 0;
}
