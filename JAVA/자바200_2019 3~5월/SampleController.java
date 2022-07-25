package application;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.web.WebView;


public class SampleController {
	@FXML
	private TableView<Billboard> billboardTable;
	@FXML
	private TableColumn<Billboard, String> song;
	@FXML
	private TableColumn<Billboard, String> artist;
	@FXML
	private TableColumn<Billboard, Integer> lastweek;
	@FXML
	private TableColumn<Billboard, Integer> rank;
	@FXML
	private TableColumn<Billboard, String> imagesrc;
	@FXML
	private WebView Billwebview;
	@FXML
	private Button btnAf;
	@FXML
	private Button btnBf;
	@FXML
	private Label lbbill;
	@FXML
	void onClickbtnAf(ActionEvent event) {}
	@FXML
	void onClickbtnBf(ActionEvent event) {}
	@FXML
	void initialize() {}
}
